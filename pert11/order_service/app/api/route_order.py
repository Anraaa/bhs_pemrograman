from fastapi import APIRouter
from app.api.model_order import Order
from app.api.db import conn 
from app.api.schema_order import serializeDict, serializeList
from bson import ObjectId
order = APIRouter() 

@order.get('/')
async def find_all_orders():
    return serializeList(conn.orders.order.find())

# @order.get('/{id}')
# async def find_one_order(id):
#     return serializeDict(conn.local.order.find_one({"_id":ObjectId(id)}))

@order.post('/')
async def create_order(order: Order):
    conn.orders.order.insert_one(dict(order))
    return serializeList(conn.orders.order.find())

@order.put('/{id}')
async def update_order(id,order: Order):
    conn.orders.order.find_one_and_update({"_id":ObjectId(id)},{
        "$set":dict(order)
    })
    return serializeDict(conn.orders.order.find_one({"_id":ObjectId(id)}))

@order.delete('/{id}')
async def delete_order(id,order: Order):
    return serializeDict(conn.orders.order.find_one_and_delete({"_id":ObjectId(id)}))
