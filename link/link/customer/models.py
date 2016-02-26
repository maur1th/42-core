from __future__ import unicode_literals
from django.db import models

# Create your models here.
class Client(models.Model):
    lastname = models.CharField(max_length = 50)
    firstname = models.CharField(max_length = 50)
    sex = models.CharField(max_length = 50)
    birthdate = models.DateField()
    status = models.CharField(max_length = 50)
    job = models.CharField(max_length = 50)
    company = models.CharField(max_length = 50)
    children = models.DecimalField(max_digits=2, decimal_places=0)
    area = models.CharField(max_length = 50)
    profile = models.CharField(max_length = 50)
    start_date = models.DateField()

    def __str__(self):
        return "{} {}".format(self.lastname, self.firstname)

class Account(models.Model):
    client = models.ForeignKey(Client, related_name='accounts')
    initial_date = models.DateField(max_length = 50)
    initial_amount = models.DecimalField(max_digits=19, decimal_places=2)
    final_amount = models.DecimalField(max_digits=19, decimal_places=2)
    account_type = models.CharField(max_length = 50)
    profile = models.CharField(max_length = 50)

    def __str__(self):
        return "{} {}: {}".format(
            self.client.lastname, self.client.firstname, self.id)
