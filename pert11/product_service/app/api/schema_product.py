def productEntity(item) -> dict:
    return {
        "id":str(item["_id"]),
        "name_product":item["name_product"],
        "quantity":item["quantity"],
        "harga":item["harga"]
    }

def productEntity(entity) -> list:
    return [productEntity(item) for item in entity]


def serializeDict(a) -> dict:
    return {**{i:str(a[i]) for i in a if i=='_id'},**{i:a[i] for i in a if i!='_id'}}

def serializeList(entity) -> list:
    return [serializeDict(a) for a in entity]

