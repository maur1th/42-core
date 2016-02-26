from __future__ import unicode_literals
from django.db import models
from customer.models import *

# Create your models here.
class Track_Record_Evolution(models.Model):
    account = models.ForeignKey(Account, related_name='accounts')
    date = models.DateField(max_length = 50)
    account_amount = models.DecimalField(max_digits=20, decimal_places=10)
    bench_amount = models.DecimalField(max_digits=20, decimal_places=19)
    account_perfdaily = models.DecimalField(max_digits=20, decimal_places=19)
    bench_perfdaily = models.DecimalField(max_digits=20, decimal_places=19)
    diff_perfdaily = models.DecimalField(max_digits=20, decimal_places=19)
    
    def __str__(self):
        return self.account


class Track_Record_Composition(models.Model):
    account = models.ForeignKey(Account, related_name='accounts')
    date = models.DateField(max_length = 50)
    ISIN = models.CharField(max_length = 50)
    amount = models.DecimalField(max_digits=20, decimal_places=10)
    clientdecided = models.CharField(max_length = 50)

    def __str__(self):
        return self.client


class Products_Table(models.Model):
    ISIN = models.ForeignKey(Track_Record_Composition, related_name='ISIN')
    name = models.DateField(max_length = 50)
    product_type = models.CharField(max_length = 50)
    PEA = models.CharField(max_length = 50)
    ASV = models.CharField(max_length = 50)
    CTO = models.CharField(max_length = 50)
    assetClass = models.CharField(max_length = 50)
    zone = models.CharField(max_length = 50)
    focus = models.CharField(max_length = 50)
    devise = models.CharField(max_length = 50)
    management = models.CharField(max_length = 50)
    description = models.CharField(max_length = 300)

    def __str__(self):
        return self.client