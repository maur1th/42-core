from django.db import models
from customer.models import Account
from product.models import Product


class Composition(models.Model):
    account = models.ForeignKey(
        Account,
        related_name = 'composition'
    )
    date = models.DateField(max_length=50)
    product = models.ForeignKey(Product)
    amount = models.DecimalField(max_digits=50, decimal_places=40)
    clientdecided = models.CharField(max_length=50)

    def __str__(self):
        return self.account


class Evolution(models.Model):
    account = models.ForeignKey(
        Account,
        related_name='evolution'
    )
    date = models.DateField(max_length=50)
    account_amount = models.DecimalField(max_digits=50, decimal_places=40)
    bench_amount = models.DecimalField(max_digits=50, decimal_places=40)
    account_perfdaily = models.DecimalField(max_digits=50, decimal_places=40)
    bench_perfdaily = models.DecimalField(max_digits=50, decimal_places=40)
    diff_perfdaily = models.DecimalField(max_digits=50, decimal_places=40)

    def __str__(self):
        return self.account

class Analytics(models.Model):
    account = models.ForeignKey(
        Account,
        related_name='analytics'
    )
    period = models.CharField(max_length=50)
    start = models.DateField()
    end = models.DateField()
    account_PL = models.DecimalField(max_digits=50, decimal_places=40)
    account_perf = models.DecimalField(max_digits=50, decimal_places=40)
    account_perfann = models.DecimalField(max_digits=50, decimal_places=40)
    account_vol = models.DecimalField(max_digits=50, decimal_places=40)
    account_maxDD = models.DecimalField(max_digits=50, decimal_places=40)
    account_TE = models.DecimalField(max_digits=50, decimal_places=40)
    bench_PL = models.DecimalField(max_digits=50, decimal_places=40)
    bench_perf = models.DecimalField(max_digits=50, decimal_places=40)
    bench_perfann = models.DecimalField(max_digits=50, decimal_places=40)
    bench_vol = models.DecimalField(max_digits=50, decimal_places=40)
    bench_maxDD = models.DecimalField(max_digits=50, decimal_places=40)

    def __str__(self):
        return self.account
