from jupyter_dash import JupyterDash
from dash import dcc, html, Input, Output
import dash_bootstrap_components as dbc
import dash_html_components as html
import requests
import pandas as pd
import dash_core_components as dcc
import plotly.express as px
import numpy as np
from dash.dependencies import Input,Output
import dash_table

app = dash.Dash(external_stylesheets = [ dbc.themes.FLATLY],)


#COVID_IMG = "https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fbigredmarkets.com%2Fwp-content%2Fuploads%2F2020%2F03%2FCovid-19.png&f=1&nofb=1"


url = "https://api.covid19api.com/summary"
response_world = requests.request("GET", url)
df_countries=pd.DataFrame(response_world.json()['Countries'])
df_global=pd.DataFrame(response_world.json()['Global'], index=[0])
df_last_updated=response_world.json()['Date']

confirmed = df_global['TotalConfirmed'][0]
newconfirmed = df_global['NewConfirmed'][0]
deaths = df_global['TotalDeaths'][0]
newdeaths = df_global['NewDeaths'][0]
recovered = df_global['TotalRecovered'][0]
newrecovered = df_global['NewRecovered'][0]


data = {'alpha-2':["AD",	"AE",	"AF",	"AG",	"AI",	"AL",	"AM",	"AN",	"AO",	"AQ",	"AR",	"AS",	"AT",	"AU",	"AW",
                	"AZ",	"BA",	"BB",	"BD",	"BE",	"BF",	"BG",	"BH",	"BI",	"BJ",	"BM",	"BN",	"BO",	"BR",
                	"BS",	"BT",	"BV",	"BW",	"BY",	"BZ",	"CA",	"CC",	"CD",	"CF",	"CG",	"CH",	"CI",	"CK",
                	"CL",	"CM",	"CN",	"CO",	"CR",	"CU",	"CV",	"CX",	"CY",	"CZ",	"DE",	"DJ",	"DK",	"DM",
                	"DO",	"DZ",	"EC",	"EE",	"EG",	"EH",	"ER",	"ES",	"ET",	"FI",	"FJ",	"FK",	"FM",	"FO",
                	"FR",	"GA",	"GB",	"GD",	"GE",	"GF",	"GG",	"GH",	"GI",	"GL",	"GM",	"GN",	"GP",	"GQ",
                	"GR",	"GS",	"GT",	"GU",	"GW",	"GY",	"HK",	"HM",	"HN",	"HR",	"HT",	"HU",	"ID",	"IE",
                	"IL",	"IM",	"IN",	"IO",	"IQ",	"IR",	"IS",	"IT",	"JE",	"JM",	"JO",	"JP",	"KE",	"KG",
                	"KH",	"KI",	"KM",	"KN",	"KP",	"KR",	"KW",	"KY",	"KZ",	"LA",	"LB",	"LC",	"LI",	"LK",
                	"LR",	"LS",	"LT",	"LU",	"LV",	"LY",	"MA",	"MC",	"MD",	"ME",	"MG",	"MH",	"MK",	"ML",
                	"MM",	"MN",	"MO",	"MP",	"MQ",	"MR",	"MS",	"MT",	"MU",	"MV",	"MW",	"MX",	"MY",	"MZ",
                	"NA",	"NC",	"NE",	"NF",	"NG",	"NI",	"NL",	"NO",	"NP",	"NR",	"NU",	"NZ",	"OM",	"PA",
                	"PE",	"PF",	"PG",	"PH",	"PK",	"PL",	"PM",	"PN",	"PR",	"PS",	"PT",	"PW",	"PY",	"QA",
                	"RE",	"RO",	"RS",	"RU",	"RW",	"SA",	"SB",	"SC",	"SD",	"SE",	"SG",	"SH",	"SI",	"SJ",
                	"SK",	"SL",	"SM",	"SN",	"SO",	"SR",	"SS",	"ST",	"SV",	"SY",	"SZ",	"TC",	"TD",	"TF",
                	"TG",	"TH",	"TJ",	"TK",	"TL",	"TM",	"TN",	"TO",	"TR",	"TT",	"TV",	"TW",	"TZ",	"UA",
                	"UG",	"UM",	"US",	"UY",	"UZ",	"VA",	"VC",	"VE",	"VG",	"VI",	"VN",	"VU",	"WF",	"WS",
                	"YE",	"YT",	"ZA",	"ZM",	"ZW"],


'iso_alpha':["AND",	"ARE",	"AFG",	"ATG",	"AIA",	"ALB",	"ARM",	"ANT",	"AGO",	"ATA",	"ARG",	"ASM",	"AUT",	"AUS",	"ABW",
        	"AZE",	"BIH",	"BRB",	"BGD",	"BEL",	"BFA",	"BGR",	"BHR",	"BDI",	"BEN",	"BMU",	"BRN",	"BOL",	"BRA",
        	"BHS",	"BTN",	"BVT",	"BWA",	"BLR",	"BLZ",	"CAN",	"CCK",	"COD",	"CAF",	"COG",	"CHE",	"CIV",	"COK",
        	"CHL",	"CMR",	"CHN",	"COL",	"CRI",	"CUB",	"CPV",	"CXR",	"CYP",	"CZE",	"DEU",	"DJI",	"DNK",	"DMA",
        	"DOM",	"DZA",	"ECU",	"EST",	"EGY",	"ESH",	"ERI",	"ESP",	"ETH",	"FIN",	"FJI",	"FLK",	"FSM",	"FRO",
        	"FRA",	"GAB",	"GBR",	"GRD",	"GEO",	"GUF",	"GGY",	"GHA",	"GIB",	"GRL",	"GMB",	"GIN",	"GLP",	"GNQ",
        	"GRC",	"SGS",	"GTM",	"GUM",	"GNB",	"GUY",	"HKG",	"HMD",	"HND",	"HRV",	"HTI",	"HUN",	"IDN",	"IRL",
        	"ISR",	"IMN",	"IND",	"IOT",	"IRQ",	"IRN",	"ISL",	"ITA",	"JEY",	"JAM",	"JOR",	"JPN",	"KEN",	"KGZ",
        	"KHM",	"KIR",	"COM",	"KNA",	"PRK",	"KOR",	"KWT",	"CYM",	"KAZ",	"LAO",	"LBN",	"LCA",	"LIE",	"LKA",
        	"LBR",	"LSO",	"LTU",	"LUX",	"LVA",	"LBY",	"MAR",	"MCO",	"MDA",	"MNE",	"MDG",	"MHL",	"MKD",	"MLI",
        	"MMR",	"MNG",	"MAC",	"MNP",	"MTQ",	"MRT",	"MSR",	"MLT",	"MUS",	"MDV",	"MWI",	"MEX",	"MYS",
        	"MOZ",	"NAM",	"NCL",	"NER",	"NFK",	"NGA",	"NIC",	"NLD",	"NOR",	"NPL",	"NRU",	"NIU",	"NZL",	"OMN",
        	"PAN",	"PER",	"PYF",	"PNG",	"PHL",	"PAK",	"POL",	"SPM",	"PCN",	"PRI",	"PSE",	"PRT",	"PLW",	"PRY",
        	"QAT",	"REU",	"ROU",	"SRB",	"RUS",	"RWA",	"SAU",	"SLB",	"SYC",	"SDN",	"SWE",	"SGP",	"SHN",	"SVN",
        	"SJM",	"SVK",	"SLE",	"SMR",	"SEN",	"SOM",	"SUR",	"SSD",	"STP",	"SLV",	"SYR",	"SWZ",	"TCA",	"TCD",
        	"ATF",	"TGO",	"THA",	"TJK",	"TKL",	"TLS",	"TKM",	"TUN",	"TON",	"TUR",	"TTO",	"TUV",	"TWN",	"TZA",
        	"UKR",	"UGA",	"UMI",	"USA",	"URY",	"UZB",	"VAT",	"VCT",	"VEN",	"VGB",	"VIR",	"VNM",	"VUT",	"WLF",
        	"WSM",	"YEM",	"MYT",	"ZAF",	"ZMB",	"ZWE"]}

code_mapping = pd.DataFrame(data)

df_world_f=pd.merge(df_countries[['Country','TotalConfirmed','TotalDeaths','TotalRecovered','CountryCode']],code_mapping, left_on = 'CountryCode',right_on = 'alpha-2',how = 'inner')

#################################   Functions for creating Plotly graphs and data card contents ################
def world_map(df):
    fig = px.choropleth(df, locations="iso_alpha", color = "TotalConfirmed",
                        hover_name= "Country",
                        hover_data = ['TotalConfirmed','TotalDeaths','TotalRecovered'],
                        projection="orthographic",
                        color_continuous_scale=px.colors.sequential.Plasma)

    fig.update_layout(margin = dict(l=4,r=4,t=4,b=4))

    return fig


def data_for_cases(header, total_cases, new_cases):
    card_content = [
        dbc.CardHeader(header),

        dbc.CardBody(
            [
               dcc.Markdown( dangerously_allow_html = True,
                   children = ["{0} <br><sub>+{1}</sub></br>".format(total_cases,new_cases)])


                ]

            )
        ]

    return card_content
  
############################################ body of the dashboard ###########################

body_app = dbc.Container([

    dbc.Row( html.Marquee("Kunjungan Kapal Pesiar di Dunia"), style = {'color':'green'}),

    dbc.Row([
        dbc.Col(dbc.Card(data_for_cases("Confirmed",f'{confirmed:,}',f'{newconfirmed:,}' ), color = 'primary',style = {'text-align':'center'}, inverse = True),xs = 12, sm = 12, md = 4, lg = 4, xl = 4, style = {'padding':'12px 12px 12px 12px'}),
        dbc.Col(dbc.Card(data_for_cases("Suspend",f'{recovered:,}',f'{newrecovered:,}' ), color = 'success',style = {'text-align':'center'}, inverse = True),xs = 12, sm = 12, md = 4, lg = 4, xl = 4, style = {'padding':'12px 12px 12px 12px'}),
        dbc.Col(dbc.Card(data_for_cases("Cancel",f'{deaths:,}',f'{newdeaths:,}' ), color = 'danger',style = {'text-align':'center'}, inverse = True),xs = 12, sm = 12, md = 4, lg = 4, xl = 4, style = {'padding':'12px 12px 12px 12px'})


        ]),

    html.Br(),
    html.Br(),

    dbc.Row([html.Div(html.H4('List Kunjungan'),
                      style = {'textAlign':'center','fontWeight':'bold','family':'georgia','width':'100%'})]),

    html.Br(),
    html.Br(),

    dbc.Row([dbc.Col(dcc.Graph(id = 'world-graph', figure = world_map(df_world_f)),style = {'height':'450px'},xs = 12, sm = 12, md = 6, lg = 6, xl = 6),

             dbc.Col([html.Div(id = 'dropdown-div', children =
             [dcc.Dropdown(id = 'country-dropdown',
                 options = [{'label':i, 'value':i} for i in np.append(['All'],df_countries['Country'].unique()) ],
                 value = 'All',
                 placeholder = 'Select the country'
                 )], style = {'width':'100%', 'display':'inline-block'}),

                      html.Div(id = 'world-table-output')
                      ],style = {'height':'450px','text-align':'center'},xs = 12, sm = 12, md = 6, lg = 6, xl = 6)

             ])


    ],fluid = True)

############################## navigation bar ################################

navbar = dbc.Navbar( id = 'navbar', children = [


    html.A(
    dbc.Row([
        #dbc.Col(html.Img(src = COVID_IMG, height = "70px")),
        dbc.Col(
            dbc.NavbarBrand("BPKS Live Tracker Kunjungan Kapal Pesiar", style = {'color':'black', 'fontSize':'25px','fontFamily':'Times New Roman'}
                            )

            )


        ],align = "center",

        ),
    href = '/'
    ),
    
                dbc.Row(
            [
        dbc.Col(

            #dbc.Button(id = 'button', children = "Support Us", color = "primary", className = 'ml-auto', href = '/')

            )        
    ],
            
     className="g-0 ms-auto flex-nowrap mt-3 mt-md-0",
)



    ])


app.layout = html.Div(id = 'parent', children = [navbar,body_app])

#################################### Callback for adding interactivity to the dashboard ####################### 

@app.callback(Output(component_id='world-table-output', component_property= 'children'),
              [Input(component_id='country-dropdown', component_property='value')])

def table_country(country):
    if country == 'All':
        df_final = df_countries
    else:
        df_final = df_countries.loc[df_countries['Country'] == '{}'.format(country)]

    return dash_table.DataTable(
    data = df_final[['Country','TotalConfirmed','TotalSuspend','TotalCancel']].to_dict('records'),
    columns = [{'id':c , 'name':c} for c in df_final[['Country','TotalConfirmed','TotalRecovered','TotalDeaths']].columns],
    fixed_rows = {'headers':True},

    sort_action = 'native',

    style_table = {
                   'maxHeight':'450px'
                   },

    style_header = {'backgroundColor':'rgb(224,224,224)',
                    'fontWeight':'bold',
                    'border':'4px solid white',
                    'fontSize':'12px'
                    },

    style_data_conditional = [

              {
                'if': {'row_index': 'odd',
                       },
                'backgroundColor': 'rgb(240,240,240)',
                'fontSize':'12px',
                },

            {
                  'if': {'row_index': 'even'},
                  'backgroundColor': 'rgb(255, 255, 255)',
                'fontSize':'12px',

            }

        ],

    style_cell = {
        'textAlign':'center',
        'fontFamily':'Times New Roman',
        'border':'4px solid white',
        'width' :'20%',
        'textOverflow': 'ellipsis',



        }


  )



if __name__ == "__main__":
    app.run_server()