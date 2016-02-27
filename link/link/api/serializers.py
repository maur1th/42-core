from customer.models import Client, Account
from rest_framework import serializers


class ClientSerializer(serializers.ModelSerializer):
    url = serializers.HyperlinkedIdentityField(
        view_name="api:client-detail",
    )

    class Meta:
        model = Client


class AccountSerializer(serializers.ModelSerializer):
    url = serializers.HyperlinkedIdentityField(
        view_name="api:account-detail",
    )

    class Meta:
        model = Account
