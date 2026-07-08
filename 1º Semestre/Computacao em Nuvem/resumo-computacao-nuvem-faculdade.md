# Resumo — Computação em Nuvem (Faculdade)
> Arquivo de revisão para uso no NotebookLM. Será atualizado a cada novo tema estudado.

---

## Tema 2 — Fundamentos de Computação em Nuvem

### Definição (NIST, 2011)
A computação em nuvem é um modelo que possibilita acesso, de modo conveniente e sob demanda, a um conjunto de recursos computacionais configuráveis (redes, servidores, armazenamento, aplicações e serviços), que podem ser rapidamente adquiridos e liberados com mínimo esforço gerencial ou interação com o provedor de serviços.

Analogia: é como alugar um quarto de hotel em vez de comprar uma casa — você usa o que precisa, quando precisa, e quem cuida da manutenção é o provedor.

### As 5 Características Essenciais
1. **Autoatendimento sob demanda (on-demand self-service)** — o usuário provisiona recursos sozinho, sem intervenção humana do provedor.
2. **Amplo acesso à rede (broad network access)** — serviços acessíveis via internet, de qualquer dispositivo.
3. **Agrupamento de recursos (resource pooling)** — infraestrutura física compartilhada entre múltiplos clientes (multi-tenancy), com alocação dinâmica.
4. **Elasticidade dinâmica (rapid elasticity)** — capacidade de escalar recursos para cima ou para baixo automaticamente conforme a demanda.
5. **Serviço mensurável (measured service)** — uso monitorado e cobrado de forma granular (modelo pay-as-you-go).

### Os 3 Modelos de Serviço

| Modelo | O provedor entrega | O usuário gerencia | Exemplo |
|---|---|---|---|
| **IaaS** — Infraestrutura como Serviço | Servidores, storage e rede virtualizados | SO, runtime, dados, aplicação | AWS EC2, Azure VMs |
| **PaaS** — Plataforma como Serviço | Infraestrutura + ambiente de execução (SO, middleware, runtime) | Aplicação e dados | Heroku, Google App Engine |
| **SaaS** — Software como Serviço | Aplicação completa, pronta para uso | Apenas configuração/uso | Gmail, Notion |

Analogia da pizza:
- IaaS = você compra os ingredientes e usa o forno emprestado.
- PaaS = a massa já vem pronta, você só monta o recheio.
- SaaS = a pizza chega pronta, você só come.

### Os 4 Modelos de Implantação
- **Nuvem privada** — infraestrutura dedicada a uma única organização.
- **Nuvem comunitária** — compartilhada entre organizações com interesses/requisitos em comum.
- **Nuvem pública** — infraestrutura compartilhada, aberta ao público, oferecida por terceiros (AWS, Azure, GCP).
- **Nuvem híbrida** — combinação de dois ou mais modelos acima.

### Camadas da Computação em Nuvem
1. **Camada de infraestrutura** (mais baixa) — servidores, sistemas de armazenamento, roteadores.
2. **Camada de plataforma** — ambiente para desenvolver, testar e implantar aplicações.
3. **Camada de aplicação** (mais alta / maior abstração) — aplicações prontas consumidas pelo usuário final.

### Atores da Computação em Nuvem
- **Provedores de infraestrutura** — fornecem a base física/virtualizada sobre a qual os serviços rodam.
- **Provedores de serviço** — desenvolvem e disponibilizam serviços aos usuários via interfaces baseadas na internet, usando a infraestrutura de terceiros.
- **Usuários da nuvem** — consomem os serviços disponibilizados.

---

<!-- Próximo tema será adicionado abaixo desta linha -->
