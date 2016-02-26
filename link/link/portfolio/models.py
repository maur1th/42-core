from __future__ import unicode_literals
from django.db import models
from customer.models import *


class TrackRecordEvolution(models.Model):
    account = models.ForeignKey(Account, related_name='track_record_evolution')
    date = models.DateField(max_length = 50)
    account_amount = models.DecimalField(max_digits=30, decimal_places=15)
    bench_amount = models.DecimalField(max_digits=30, decimal_places=25)
    account_perfdaily = models.DecimalField(max_digits=30, decimal_places=25)
    bench_perfdaily = models.DecimalField(max_digits=30, decimal_places=25)
    diff_perfdaily = models.DecimalField(max_digits=30, decimal_places=25)

    def __str__(self):
        return self.account


class TrackRecordComposition(models.Model):
    account = models.ForeignKey(
        Account, related_name = 'track_record_composition')
    date = models.DateField(max_length = 50)
    ISIN = models.CharField(max_length = 50)
    amount = models.DecimalField(max_digits=30, decimal_places=15)
    clientdecided = models.CharField(max_length = 50)

    def __str__(self):
        return self.account


class Analytics(models.Model):
    account = models.ForeignKey(Account, related_name='analytics')
    period = models.DateField(max_length = 50)
    date_start = models.DateField()
    date_end = models.DateField()
    account_PL = models.DecimalField(max_digits=30, decimal_places=15)
    account_perf = models.DecimalField(max_digits=30, decimal_places=25)
    account_perfann = models.DecimalField(max_digits=30, decimal_places=25)
    account_vol = models.DecimalField(max_digits=30, decimal_places=25)
    account_maxDD = models.DecimalField(max_digits=30, decimal_places=25)
    account_TE = models.DecimalField(max_digits=30, decimal_places=25)
    bench_PL = models.DecimalField(max_digits=30, decimal_places=15)
    bench_perf = models.DecimalField(max_digits=30, decimal_places=25)
    bench_perfann = models.DecimalField(max_digits=30, decimal_places=25)
    bench_vol = models.DecimalField(max_digits=30, decimal_places=25)
    bench_maxDD = models.DecimalField(max_digits=30, decimal_places=25)

    def __str__(self):
        return self.account
