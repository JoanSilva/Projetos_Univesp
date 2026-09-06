from django.http import HttpResponse

def pagina_inicial(request):
    html_retro = """
    <html>
        <head>
            <title>Bem-vindo a Internet de 1999!</title>
        </head>
        <body bgcolor="#C0C0C0" text="#000000" link="#0000FF" vlink="#800080">
            
            <center>
                <h1>🌐 MEU SITE PILOTO RETRÔ 🌐</h1>
                <hr size="4" width="80%" color="#000080">
                <p><b>A internet raiz do ano de 1999 está de volta!</b></p>
                
                <!-- O clássico letreiro piscante da época -->
                <marquee scrollamount="5" width="50%">
                    <font color="red" size="5"><b>*** ATENÇÃO: SITE EM CONSTRUÇÃO! ***</b></font>
                </marquee>
            </center>

            <br><br>

            <table border="3" cellpadding="10" align="center" bgcolor="#FFFFFF">
                <tr>
                    <th>Matéria Univesp</th>
                    <th>Status do Projeto</th>
                </tr>
                <tr>
                    <td>Ciência de Dados</td>
                    <td><b>Furdunço resolvido com sucesso! ☕</b></td>
                </tr>
                <tr>
                    <td>Estrutura de Dados</td>
                    <td>Fila e Pilha salvas na pasta certa! 📂</td>
                </tr>
            </table>

            <br><br>

            <center>
                <p>Obrigado por nos visitar no seu modem de 56kbps!</p>
                <p>Você é o visitante número: <b>000001</b></p>
            </center>

        </body>
    </html>
    """
    return HttpResponse(html_retro)
