from django.contrib import admin
from django.urls import path
from retro_web.views import pagina_inicial  # Importa a nossa página retrô

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', pagina_inicial, name='home'),   # Faz o site abrir direto na página retrô!
]
