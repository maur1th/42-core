from customer.models import Client, Account
from rest_framework import serializers


class ClientSerializer(serializers.ModelSerializer):
    class Meta:
        model = Client


class AccountSerializer(serializers.ModelSerializer):
    class Meta:
        model = Account
