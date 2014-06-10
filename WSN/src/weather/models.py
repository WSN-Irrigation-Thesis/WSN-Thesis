from django.db import models

class Forecast(models.Model):
    position = models.CharField(max_length=30)
    rain = models.FloatField(default=0)
    date = models.CharField(max_length=30)
    timestamp = models.CharField(max_length=30)
    
    def __unicode__(self):
        return str(self.position)