from django.conf.urls import patterns, url

from . import views


urlpatterns = patterns(
    '',
    url(
        regex=r'^(?P<id>[\d]+)/$',
        view=views.Portfolio.as_view(),
        name='top'
    ),
)
