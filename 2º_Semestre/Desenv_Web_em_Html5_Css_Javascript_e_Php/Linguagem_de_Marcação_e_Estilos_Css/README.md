# Laboratório Prático: Formulários HTML5 e Estilização CSS3

Este repositório reúne códigos práticos e anotações técnicas sobre a construção de formulários semânticos, validação nativa no front-end e propriedades fundamentais de estilização com CSS3.

---

## 1. Formulários HTML5

### Comunicação Cliente-Servidor (`action` e `method`)
* **`action`**: Define a rota ou URL no servidor (back-end) que receberá e processará os dados submetidos.
* **`method="get"`**: Anexa os dados diretamente na URL como *Query String* (`?chave=valor`). Ideal para pesquisas, filtros e links compartilháveis. **Não deve ser usado para dados sensíveis** (senhas, CPF), pois expõe as informações na barra de endereços e no histórico.
* **`method="post"`**: Envia os dados ocultos no corpo da requisição HTTP (*Request Body*). Padrão obrigatório para cadastros, logins e envio de informações volumosas ou sensíveis.

### Identificação e Acessibilidade (`label`, `for`, `id` e `name`)
* **`id` (Front-end)**: Identificador único do elemento no DOM. Serve para conectar o `<input>` à sua `<label>`, aplicar estilos via CSS (`#id`) e manipular o campo via JavaScript.
* **`for` (Front-end)**: Atributo exclusivo da `<label>` que aponta para o `id` do campo correspondente (vínculo explícito), ampliando a área de clique e garantindo acessibilidade em leitores de tela. *(Alternativamente, envolver o `<input>` dentro da `<label>` cria um vínculo implícito).*
* **`name` (Back-end)**: Nome da chave enviada no pacote HTTP (`GET` ou `POST`) para o servidor. Sem o atributo `name`, o valor do campo não é enviado na requisição.

### Validação Nativa e Regex
* **`required`**: Exige o preenchimento do campo antes do envio.
* **`pattern`**: Valida o conteúdo textual usando Expressões Regulares (Regex), como `[A-Z]{2}[0-9]{9}BR` para códigos de rastreamento.
* **`type="date"` vs. `pattern`**: Campos do tipo `date` possuem interface nativa de calendário e ignoram o atributo `pattern`; para restringir datas, utilizam-se os atributos `min` e `max` no formato ISO (`AAAA-MM-DD`).
* **`novalidate`**: Atributo aplicado na tag `<form>` para desativar a validação nativa do navegador (útil para botões de rascunho ou validações customizadas via JavaScript).

---

## 2. Fundamentos e Recursos de CSS3

### Árvore DOM e Seletores de Relacionamento
O **DOM (*Document Object Model*)** é a representação em memória da estrutura HTML em formato de árvore genealógica (pais, filhos e irmãos):
* **`div p` (Descendente)**: Seleciona qualquer `<p>` dentro de uma `<div>`, independentemente do nível de profundidade (filho, neto, bisneto).
* **`div > p` (Filho direto)**: Seleciona apenas os `<p>` que estão imediatamente dentro da `<div>`.
* **`h1 + p` (Irmão adjacente)**: Seleciona apenas o primeiro `<p>` posicionado imediatamente após um `<h1>` dentro do mesmo elemento pai.

### Cascata e Especificidade
Quando múltiplas regras disputam o mesmo elemento, prevalece a mais específica:
1. Seletor de Tag (`p`) — menor peso
2. Seletor de Classe (`.classe`) e Atributo (`[type="text"]`)
3. Seletor de ID (`#id`)
4. Estilo Inline (`style="..."`) — maior peso
*(Em caso de empate, vence a última regra declarada no arquivo).*

### Cores, Caixas e Tipografia
* **Modelos de Cor**: Hexadecimal (`#2c3e50`), RGB/RGBA (`rgba(231, 76, 60, 0.5)` com canal alfa de transparência) e HSL/HSLA (`hsl(200, 70%, 45%)` baseado em matiz, saturação e luminosidade).
* **`border` vs. `outline`**: `border` faz parte do modelo de caixa e ocupa espaço físico (empurra elementos vizinhos); `outline` é desenhado por fora da borda sem alterar o posicionamento do layout.
* **Espaçamento de Texto**: `line-height` declarado como número puro (ex: `1.8`) calcula a altura da linha proporcionalmente ao `font-size` atual, evitando sobreposição de linhas em títulos herdados. `letter-spacing` e `word-spacing` ajustam o espaçamento entre letras e palavras.
* **Web Fontes (`@font-face`)**: Permite carregar arquivos tipográficos externos (padrão moderno: `WOFF2`), utilizando `local()` para checar se a fonte já existe no dispositivo antes do download.
* **Layout (`display`)**: Diferente do `inline` (que alinha elementos na mesma linha e ignora dimensões verticais), o `display: flex` combinado com `flex-direction: column` organiza blocos verticalmente habilitando o controle exato de espaçamento interno com `gap`.