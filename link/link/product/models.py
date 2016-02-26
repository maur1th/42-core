from __future__ import unicode_literals
from django.db import models
from customer.models import *
from portfolio.models import *

# Create your models here.
class Products_Table(models.Model):
    ISIN = models.ForeignKey(Track_Record_Composition, related_name='ISIN')
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


class Track_Record_Evolution(models.Model):
    ISIN = models.ForeignKey(Track_Record_Composition, related_name='ISIN')
    date = models.DateField(max_length = 50)
    value = models.DecimalField(max_digits=30, decimal_places=25)

    def __str__(self):
        return self.ISIN


# class Track_Record_Evolution(models.Model):
#     ISIN = models.ForeignKey(Track_Record_Composition, related_name='ISIN')
#     date = models.DateField(max_length = 50)
#     value = models.DecimalField(max_digits=30, decimal_places=25)

#     def __str__(self):
#         return self.client
