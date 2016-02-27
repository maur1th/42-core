from django.conf.urls import patterns, url

from . import views


urlpatterns = patterns(
    '',
    url(
        regex=r'^(?P<pk>[\d]+)/$',
        view=views.Portfolio.as_view(),
        name='top'
    ),
)
