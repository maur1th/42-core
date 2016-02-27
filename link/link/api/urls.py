from django.conf.urls import url, include
from rest_framework import routers
from . import views


router = routers.DefaultRouter()
router.register(r'clients', views.ClientViewSet)
router.register(r'accounts', views.AccountViewSet)
router.register(r'analytics', views.AnalyticsViewSet)
router.register(r'composition', views.CompositionViewSet)
router.register(r'product', views.ProductViewSet)

urlpatterns = [
    url(r'^', include(router.urls)),
]
