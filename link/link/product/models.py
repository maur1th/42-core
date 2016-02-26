from __future__ import unicode_literals
from django.db import models
from customer.models import *
from portfolio.models import *

class Products(models.Model):
    ISIN = models.ForeignKey(
        Track_Record_Composition, related_name='products')
    name = models.DateField(max_length = 50)
    product_type = models.CharField(max_length = 50)
    PEA = models.CharField(max_length = 50)
    ASV = models.CharField(max_length = 50)
    CTO = models.CharField(max_length = 50)
    asset_class = models.CharField(max_length = 50)
    zone = models.CharField(max_length = 50)
    focus = models.CharField(max_length = 50)
    devise = models.CharField(max_length = 50)
    management = models.CharField(max_length = 50)
    description = models.CharField(max_length = 300)

    def __str__(self):
        return self.ISIN


class TrackRecordEvolution(models.Model):
    ISIN = models.ForeignKey(
        Track_Record_Composition, related_name='track_record_evolution')
    date = models.DateField(max_length = 50)
    value = models.DecimalField(max_digits=30, decimal_places=25)

    def __str__(self):
        return self.ISIN


class Analytics(models.Model):
    ISIN = models.ForeignKey(
        Track_Record_Composition, related_name='analytics')
    period = models.DateField(max_length = 50)
    date_start = models.DateField()
    date_end = models.DateField()
    PL = models.DecimalField(max_digits=30, decimal_places=15)
    perf = models.DecimalField(max_digits=30, decimal_places=25)
    perfann = models.DecimalField(max_digits=30, decimal_places=25)
    vol = models.DecimalField(max_digits=30, decimal_places=25)
    maxDD = models.DecimalField(max_digits=30, decimal_places=25)

    def __str__(self):
        return self.ISIN
