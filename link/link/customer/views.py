from django.views.generic import ListView, DetailView

from .models import Client


class LoginView(ListView):
    model = Client


class ClientView(DetailView):
    model = Client
