from rest_framework import viewsets, filters
from customer.models import Client, Account
from portfolio.models import Analytics, Composition, Evolution
from product.models import Product
from .serializers import ClientSerializer, AccountSerializer, \
    AnalyticsSerializer, CompositionSerializer, ProductSerializer, \
    EvolutionSerializer


class ClientViewSet(viewsets.ModelViewSet):
    queryset = Client.objects.all()
    serializer_class = ClientSerializer


class AccountViewSet(viewsets.ModelViewSet):
    queryset = Account.objects.all()
    serializer_class = AccountSerializer
    filter_fields = ('client', )


class AnalyticsViewSet(viewsets.ModelViewSet):
    queryset = Analytics.objects.all()
    serializer_class = AnalyticsSerializer
    filter_fields = ('account', )


class CompositionViewSet(viewsets.ModelViewSet):
    queryset = Composition.objects.all()
    serializer_class = CompositionSerializer
    filter_fields = ('account', 'date', )


class EvolutionViewSet(viewsets.ModelViewSet):
    queryset = Evolution.objects.all()
    serializer_class = EvolutionSerializer


class ProductViewSet(viewsets.ModelViewSet):
    queryset = Product.objects.all()
    serializer_class = ProductSerializer
