from django.conf.urls import url, include
from rest_framework import routers
from . import views


router = routers.DefaultRouter()
router.register(r'clients', views.ClientViewSet)
router.register(r'accounts', views.AccountViewSet)

urlpatterns = [
    url(r'^', include(router.urls)),
]
