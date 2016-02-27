from rest_framework import viewsets, filters
import django_filters
from customer.models import Client, Account
from portfolio.models import Analytics, Composition, Evolution
from product.models import Product
from .serializers import ClientSerializer, AccountSerializer, \
    AnalyticsSerializer, CompositionSerializer, ProductSerializer, \
    EvolutionSerializer


# Filters
class AnalyticsFilter(django_filters.FilterSet):
    class Meta:
        model = Analytics
        fields = ['account']
        order_by = ['period']

class EvolutionFilter(django_filters.FilterSet):
    min_date = django_filters.DateTimeFilter(name="date", lookup_type="gte")
    max_date = django_filters.DateTimeFilter(name="date", lookup_type="lte")

    class Meta:
        model = Evolution
        fields = ['account', 'date', 'min_date', 'max_date']


# ViewSets
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
    filter_class = AnalyticsFilter


class CompositionViewSet(viewsets.ModelViewSet):
    queryset = Composition.objects.all()
    serializer_class = CompositionSerializer
    filter_fields = ('account', 'date', )


class EvolutionViewSet(viewsets.ModelViewSet):
    queryset = Evolution.objects.all()
    serializer_class = EvolutionSerializer
    filter_class = EvolutionFilter


class ProductViewSet(viewsets.ModelViewSet):
    queryset = Product.objects.all()
    serializer_class = ProductSerializer
