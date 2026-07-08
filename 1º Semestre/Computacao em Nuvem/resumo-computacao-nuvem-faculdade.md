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

### Modelos de Serviço — Aprofundamento e Responsabilidade Compartilhada

**A "escada da responsabilidade":** quanto mais pronto o serviço chega, menos trabalho (e menos controle) você tem sobre ele.

```
On-Premises → IaaS → PaaS → SaaS
(você faz tudo)              (o provedor faz tudo)
```

Analogia da festa de 15 anos:

| Modelo | O que vem pronto | O que você ainda organiza |
|---|---|---|
| **On-premises** | Nada — a festa é na sua casa | Tudo: salão, buffet, decoração, DJ, cerimonialista, foto, vestido, maquiagem |
| **IaaS** | Só o salão de festas | Buffet, decoração, DJ, cerimonialista, foto, vestido, maquiagem |
| **PaaS** | Salão + buffet + decoração + DJ + cerimonialista | Foto/filmagem, vestido, maquiagem |
| **SaaS** | Tudo incluso | Só aparecer e aproveitar |

(Mesma lógica da analogia da pizza do início do Tema 2 — só que aplicada a um evento.)

**Modelo de Responsabilidade Compartilhada** (quem gerencia cada camada):

| Camada gerenciada | On-premises | IaaS | PaaS | SaaS |
|---|:---:|:---:|:---:|:---:|
| Dados e aplicação | Cliente | Cliente | Cliente | **Provedor** |
| Runtime / Middleware | Cliente | Cliente | **Provedor** | Provedor |
| Sistema Operacional | Cliente | Cliente | Provedor | Provedor |
| Virtualização | Cliente | **Provedor** | Provedor | Provedor |
| Servidores / Storage / Rede física | Cliente | Provedor | Provedor | Provedor |

⚠️ **Pegadinha de prova:** mesmo em SaaS, a segurança dos **dados e das configurações de acesso** continua sendo, em grande parte, responsabilidade do **usuário/cliente** — não é 100% do provedor.

### Outros Modelos "as a Service"

| Sigla | Nome completo | O que oferece | Exemplo |
|---|---|---|---|
| **DRaaS** | Disaster Recovery as a Service | Replicação de servidores, dados e aplicações para recuperação de desastres | Backup automático em ambiente espelho |
| **CaaS** | Communication as a Service | Comunicação via nuvem: VoIP, mensagens, streaming de vídeo | Zoom, Microsoft Teams |
| **FaaS** | Function as a Service | Execução de funções sob demanda, sem gerenciar servidor | AWS Lambda, Azure Functions |
| **DBaaS** | Database as a Service | Banco de dados gerenciado pelo provedor | Amazon RDS, Firebase |
| **MaaS** | Ambíguo — ver observação | — | — |

⚠️ **Nota de terminologia — MaaS é ambíguo:** pode significar *Monitoring as a Service* (o mais comum em nuvem corporativa), *Mobility as a Service* (smart cities/transporte) ou *Malware as a Service* (termo de cibercrime, não é um modelo de nuvem comercial legítimo). Se aparecer em prova sem contexto, confirmar com o professor qual definição está sendo cobrada.

### Modelos de Implantação — Aprofundamento: Pública e Privada

**Diferença entre modelo de Serviço e modelo de Implantação:**

| Pergunta que o modelo responde | Categoria |
|---|---|
| "Quem gerencia o quê" (infra, plataforma, aplicação) | Modelo de **Serviço** → IaaS, PaaS, SaaS |
| "Onde a nuvem está e quem pode acessá-la" | Modelo de **Implantação** → Pública, Privada, Comunitária, Híbrida |

Analogia: modelo de serviço é escolher se a casa vem mobiliada, semimobiliada ou vazia. Modelo de implantação é escolher se essa casa fica num condomínio compartilhado (pública) ou num terreno só seu (privada). São perguntas independentes — dá pra ter IaaS numa nuvem pública OU numa nuvem privada.

#### Nuvem Pública
"Condomínio" gigante na internet: o provedor (AWS, Azure, GCP) constrói e mantém tudo, qualquer empresa "aluga um apartamento" (recursos) e paga pelo uso. Usuário tem **menos controle** sobre os dados.

| Vantagens | Desvantagens |
|---|---|
| Preço diluído entre milhares de clientes | Segurança — infraestrutura compartilhada (multi-tenancy) |
| Facilidade de contratação e configuração | Controle é do provedor, não do usuário |
| Escalabilidade — dobrar/triplicar recursos em minutos | Requisitos legais — dados podem ficar hospedados em outro país (leis diferentes) |
| Boa performance | — |

#### Nuvem Privada
"Casa isolada com muro só seu": infraestrutura dedicada a uma única empresa, ninguém mais compartilha.

⚠️ **Terminologia importante:** nuvem privada **não é sinônimo de on-premises**.
- **On-premises** = hardware fica fisicamente dentro da empresa.
- **Off-premises** = hardware fica em datacenter de terceiros, mas de uso **exclusivo** — ainda é considerada nuvem privada.
- O que define "privada" é a **exclusividade de uso**, não a localização física.

| Vantagens | Desvantagens |
|---|---|
| Disponibilidade maior (sem concorrência por recursos) | Custo inicial alto (compra, instalação, configuração de hardware) |
| Customização sob medida | Exige equipe de TI própria/especializada |
| Suporte exclusivo, mais ágil | — |
| Segurança — monitoramento dedicado, anomalias mais evidentes | — |

Uso típico: dados muito sensíveis (financeiro, saúde, governo) ou exigências regulatórias rígidas.

**Tabela-síntese:**

| Critério | Nuvem Pública | Nuvem Privada |
|---|---|---|
| Compartilhamento de infraestrutura | Sim (multi-tenant) | Não (uso exclusivo) |
| Controle do usuário | Baixo | Alto |
| Custo inicial | Baixo | Alto |
| Escalabilidade | Muito alta | Limitada à infra própria |
| Localização | Sempre off-premises (do provedor) | On-premises ou off-premises |
| Exemplo | AWS, Azure, GCP | Datacenter dedicado de um banco |

---

<!-- Próximo tema será adicionado abaixo desta linha -->
