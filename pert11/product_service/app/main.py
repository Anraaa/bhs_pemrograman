from fastapi import FastAPI
from app.api.route_product import product
app = FastAPI()
app.include_router(product, prefix="/products", tags=["Products Docs"])
