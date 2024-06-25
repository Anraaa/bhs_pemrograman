from pydantic import BaseModel

class Product(BaseModel):
    name_product: str
    quantity: str
    harga: str