from rest_framework import serializers
from customer.models import Client, Account
from portfolio.models import Analytics


class ClientSerializer(serializers.ModelSerializer):
    class Meta:
        model = Client


class AccountSerializer(serializers.ModelSerializer):
    class Meta:
        model = Account


class AnalyticsSerializer(serializers.ModelSerializer):
    class Meta:
        model = Analytics
