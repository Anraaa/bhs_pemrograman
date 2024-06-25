def orderEntity(item) -> dict:
    return {
        "id":str(item["_id"]),
        "user":item["user"],
        "product":item["produt"],
        "total":item["total"],
        "status":item["status"]
    }

def orderEntity(entity) -> list:
    return [orderEntity(item) for item in entity]


def serializeDict(a) -> dict:
    return {**{i:str(a[i]) for i in a if i=='_id'},**{i:a[i] for i in a if i!='_id'}}

def serializeList(entity) -> list:
    return [serializeDict(a) for a in entity]

