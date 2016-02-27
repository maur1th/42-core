from rest_framework import viewsets, filters
from customer.models import Client, Account
from portfolio.models import Analytics
from .serializers import ClientSerializer, AccountSerializer,\
    AnalyticsSerializer


class ClientViewSet(viewsets.ModelViewSet):
    queryset = Client.objects.all()
    serializer_class = ClientSerializer


class AccountViewSet(viewsets.ModelViewSet):
    queryset = Account.objects.all()
    serializer_class = AccountSerializer


class AnalyticsViewSet(viewsets.ModelViewSet):
    queryset = Analytics.objects.all()
    serializer_class = AnalyticsSerializer
    filter_fields = ('account', )
