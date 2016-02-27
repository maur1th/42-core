from django.conf.urls import patterns, url

from . import views


urlpatterns = patterns(
    '',
    url(
        regex=r'^$',
        view=views.LoginView.as_view(),
        name='login'
    ),
    url(
        regex=r'^(?P<pk>[\d]+)/$',
        view=views.ClientView.as_view(),
        name='top'
    )
)
