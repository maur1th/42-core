from django.views.generic import DetailView

from customer.models import Client


class Portfolio(DetailView):
    model = Client
