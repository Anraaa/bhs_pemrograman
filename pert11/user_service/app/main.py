from fastapi import FastAPI
from app.api.route_user import user
app = FastAPI()
app.include_router(user, prefix="/users", tags=["User Docs"])
