from rest_framework import serializers
from customer.models import Client, Account
from portfolio.models import Analytics, Composition
from product.models import Product


class ClientSerializer(serializers.ModelSerializer):
    class Meta:
        model = Client


class AccountSerializer(serializers.ModelSerializer):
    class Meta:
        model = Account


class AnalyticsSerializer(serializers.ModelSerializer):
    class Meta:
        model = Analytics


class CompositionSerializer(serializers.ModelSerializer):
    class Meta:
        model = Composition


class ProductSerializer(serializers.ModelSerializer):
    class Meta:
        model = Product
        fields = ('id', 'isin', 'name', 'product_type', 'asset_class', 'zone',
                  'currency', 'description', )
