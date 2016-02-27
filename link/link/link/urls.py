
from django.conf.urls import patterns, include, url
from django.contrib import admin
from django.views.generic import RedirectView
from django.core.urlresolvers import reverse_lazy

from django.conf import settings


urlpatterns = patterns(
    '',
    url(r'^$', RedirectView.as_view(url=reverse_lazy('customer:login'),
        permanent=True)),
    url(r'^customer/', include('customer.urls', namespace='customer')),
    url(r'^api/', include('api.urls', namespace='api')),
)
