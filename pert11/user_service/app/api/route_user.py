from fastapi import APIRouter
from app.api.model_user import User 
from app.api.db import conn 
from app.api.schema_user import serializeDict, serializeList
from bson import ObjectId
user = APIRouter() 

@user.get('/')
async def find_all_users():
    return serializeList(conn.users.user.find())

# @user.get('/{id}')
# async def find_one_user(id):
#     return serializeDict(conn.local.user.find_one({"_id":ObjectId(id)}))

@user.post('/')
async def create_user(user: User):
    conn.users.user.insert_one(dict(user))
    return serializeList(conn.users.user.find())

@user.put('/{id}')
async def update_user(id,user: User):
    conn.users.user.find_one_and_update({"_id":ObjectId(id)},{
        "$set":dict(user)
    })
    return serializeDict(conn.users.user.find_one({"_id":ObjectId(id)}))

@user.delete('/{id}')
async def delete_user(id,user: User):
    return serializeDict(conn.users.user.find_one_and_delete({"_id":ObjectId(id)}))
