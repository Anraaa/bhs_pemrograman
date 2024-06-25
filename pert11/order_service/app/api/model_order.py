from pydantic import BaseModel

class Order(BaseModel):
    user: str
    product: str
    total: str
    status: str