from django.db import models


class Product(models.Model):
    isin = models.CharField(max_length = 50)
    name = models.CharField(max_length = 50)
    product_type = models.CharField(max_length = 50)
    pea = models.CharField(max_length = 50)
    asv = models.CharField(max_length = 50)
    cto = models.CharField(max_length = 50)
    asset_class = models.CharField(max_length = 50)
    zone = models.CharField(max_length = 50)
    focus = models.CharField(max_length = 50)
    currency = models.CharField(max_length = 50)
    management = models.CharField(max_length = 50)
    description = models.TextField()

    def __str__(self):
        return self.isin


class Evolution(models.Model):
    product = models.ForeignKey(Product, related_name='evolution')
    date = models.DateField(max_length = 50)
    value = models.DecimalField(max_digits=30, decimal_places=25)

    def __str__(self):
        return self.isin


class Analytics(models.Model):
    product = models.ForeignKey(Product, related_name='analytics')
    period = models.DateField(max_length = 50)
    date_start = models.DateField()
    date_end = models.DateField()
    pl = models.DecimalField(max_digits=30, decimal_places=15)
    perf = models.DecimalField(max_digits=30, decimal_places=25)
    perfann = models.DecimalField(max_digits=30, decimal_places=25)
    vol = models.DecimalField(max_digits=30, decimal_places=25)
    maxDD = models.DecimalField(max_digits=30, decimal_places=25)

    def __str__(self):
        return self.isin
