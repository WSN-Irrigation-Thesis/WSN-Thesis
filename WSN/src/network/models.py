from django.db import models

class Node(models.Model):
    node_id = models.IntegerField(default=0)
    node_type = models.CharField(max_length=100)
    
    def __unicode__(self):
        return str(self.node_id)
    
class Measure_Data(models.Model):
    node_id = models.ForeignKey(Node)
    temp = models.FloatField(default=0)
    moist = models.FloatField(default=0)
    timestamp = models.CharField(max_length=30)

    def __unicode__(self):
        return str(self.node_id)