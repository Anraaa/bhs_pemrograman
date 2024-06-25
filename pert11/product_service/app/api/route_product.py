from fastapi import APIRouter
from app.api.model_product import Product
from app.api.db import conn 
from app.api.schema_product import serializeDict, serializeList
from bson import ObjectId
product = APIRouter() 

@product.get('/')
async def find_all_products():
    return serializeList(conn.products.product.find())

@product.post('/')
async def create_product(product: Product):
    conn.products.product.insert_one(dict(product))
    return serializeList(conn.products.product.find())

@product.put('/{id}')
async def update_product(id,product: Product):
    conn.products.product.find_one_and_update({"_id":ObjectId(id)},{
        "$set":dict(product)
    })
    return serializeDict(conn.products.product.find_one({"_id":ObjectId(id)}))

@product.delete('/{id}')
async def delete_product(id,product: Product):
    return serializeDict(conn.products.Product.find_one_and_delete({"_id":ObjectId(id)}))
