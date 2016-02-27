from django.views.generic import ListView

from .models import Client


class LoginView(ListView):
    model = Client
