from django.conf.urls import patterns, url

from . import views


urlpatterns = patterns(
    '',
    url(
        regex=r'^$',
        view=views.Login.as_view(),
        name='top'
    ),
)
