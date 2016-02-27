from customer.models import Client, Account
from rest_framework import viewsets
from .serializers import ClientSerializer, AccountSerializer

from django.shortcuts import get_object_or_404
from rest_framework.response import Response

class ClientViewSet(viewsets.ModelViewSet):
    queryset = Client.objects.all()
    serializer_class = ClientSerializer


class AccountViewSet(viewsets.ModelViewSet):
    queryset = Account.objects.all()
    serializer_class = AccountSerializer
