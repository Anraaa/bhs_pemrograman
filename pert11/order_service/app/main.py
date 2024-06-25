from fastapi import FastAPI
from app.api.route_order import order
app = FastAPI()
app.include_router(order, prefix="/orders", tags=["Order Docs"])
