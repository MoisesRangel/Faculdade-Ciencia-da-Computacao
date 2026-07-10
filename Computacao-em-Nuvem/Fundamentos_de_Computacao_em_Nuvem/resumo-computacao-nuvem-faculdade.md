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

#### Nuvem Híbrida
Combinação estratégica de pública + privada: a empresa decide o que fica em cada uma. Dados críticos ficam na privada (sob controle total); picos de demanda e cargas não-críticas vão para a pública.

Analogia: cofre em casa (privada) para joias e documentos importantes, self-storage terceirizado (pública) para malas de roupa de inverno que não valem o custo/risco de guardar em casa.

| Motivo de adoção | Explicação |
|---|---|
| Dados críticos protegidos | Informações sensíveis ficam na nuvem privada |
| Escalabilidade sob demanda | Picos de uso absorvidos pela nuvem pública sem comprar hardware novo |
| Redução de tempo de implantação | Montar infra híbrida é mais rápido que expandir fisicamente uma infra própria |
| Equilíbrio custo x controle | Paga caro (privada) só onde precisa de controle rígido; barato (pública) no resto |

#### Nuvem Comunitária
"Condomínio fechado entre empresas parecidas" — não é aberta a qualquer um (como a pública), nem exclusiva de uma única empresa (como a privada). Compartilhada por organizações com **interesse comum** (missão, requisitos de segurança, políticas). Ex: hospitais públicos da mesma rede, universidades federais.

| Característica | Nuvem Pública | Nuvem Comunitária |
|---|---|---|
| Quem acessa | Qualquer um | Só organizações do grupo/interesse comum |
| Configuração | Padrão do provedor | Pode ser configurada conforme objetivos do grupo |
| Custo | Diluído entre milhões de usuários | Diluído entre número reduzido de organizações |
| Localização | Sempre off-premises | On-premises **ou** off-premises |
| Quem administra | Sempre o provedor | A própria organização (ou membro) **ou** terceiros |

#### Nuvem Distribuída (modelo adicional, mais recente)
Diferente dos outros 4 (que respondem "quem pode acessar"), aqui a lógica é **onde fisicamente os dados/processamento estão**. Servidores ficam espalhados em várias localidades, mas conectados a uma única rede/hub — funcionando como um único ambiente.

Analogia: rede de farmácias com filiais em várias cidades, todas conectadas ao mesmo sistema central de estoque em tempo real.

Benefícios: **alta disponibilidade** (se um servidor cai, outro assume) e **baixa latência** (usuário atendido pelo servidor mais próximo fisicamente).

#### Tabela-síntese: os 5 modelos de implantação

| Modelo | Quem acessa | Infraestrutura | Melhor para |
|---|---|---|---|
| **Pública** | Qualquer um | Compartilhada (multi-tenant) | Startups, escalabilidade, baixo custo inicial |
| **Privada** | Uma única empresa | Dedicada | Dados sensíveis, compliance rígido |
| **Comunitária** | Grupo com interesse comum | Compartilhada entre poucos | Setor público, saúde, educação |
| **Híbrida** | Combinação (pública + privada) | Mista | Equilíbrio entre controle e escalabilidade |
| **Distribuída** | Varia (foco é geografia) | Espalhada fisicamente, rede única | Aplicações globais, baixa latência |

### Infraestrutura On-Premise x Nuvem — Comparação

Mesmo objetivo (armazenar e integrar dados/serviços da empresa), caminhos diferentes. Diferença está em: **tipo de servidor**, **forma de acesso** e **flexibilidade de armazenamento**.

Analogia: ter carro próprio (on-premise) x usar Uber (nuvem) — os dois levam do ponto A ao B, mas diferem em quem é dono, como você acessa, e o quanto ajusta a capacidade sob demanda.

**1) Tipo de servidor**

| | On-premise | Nuvem |
|---|---|---|
| Onde está o servidor | Físico, dentro da empresa | No provedor (remoto) |
| Como conecta | Computadores precisam estar na rede local da empresa | Acesso remoto via internet |
| Complexidade de implantação | Alta — treinamento, equipe especializada, hardware | Baixa — provedor entrega pronto |

**2) Forma de acesso**

| | On-premise | Nuvem |
|---|---|---|
| Requisito de acesso | Equipamento configurado e interligado ao servidor principal | Login e senha em plataforma/portal/app |
| Acesso remoto? | Sim, mas exige equipamento conectado ao servidor principal (ex: VPN) | Sim, sempre — nativamente remoto (só precisa de internet) |

⚠️ **Atenção:** on-premise também permite acesso remoto — não é "só acessa de dentro da empresa". A diferença é que exige conexão configurada à rede (ex: VPN), enquanto a nuvem é nativamente remota.

**3) Flexibilidade de armazenamento**

| | On-premise | Nuvem |
|---|---|---|
| Capacidade inicial | Volume fixo contratado/comprado | Sob demanda |
| Para crescer | Comprar hardware + software + equipe de TIC | Aumenta/diminui na hora, pela plataforma |
| Velocidade de escalonamento | Lenta (semanas/meses) | Rápida (minutos) |
| Custo de escalar | Alto (CAPEX) | Baixo, sob demanda (OPEX) |

**Tabela-síntese consolidada:**

| Dimensão | On-Premise | Nuvem |
|---|---|---|
| Servidor | Físico, local, na empresa | Remoto, no provedor |
| Acesso | Precisa de configuração/conexão à rede da empresa | Login/senha via internet, nativamente remoto |
| Armazenamento | Fixo, expansão lenta e cara | Elástico, expansão rápida e barata |
| Investimento | CAPEX (compra de hardware) | OPEX (paga pelo uso) |
| Equipe necessária | TI especializada e dedicada | Reduzida (provedor cuida da infra) |
| Controle | Total | Compartilhado com o provedor |

📌 **Conexões com conceitos já vistos no Tema 2:**
- CAPEX x OPEX = tradução financeira do modelo *pay-as-you-go* (serviço mensurável).
- Elasticidade = motivo pelo qual a nuvem escala rápido e o on-premise não.
- Responsabilidade compartilhada = motivo pelo qual on-premise dá controle total e nuvem dá controle dividido.

### Tecnologias Habilitadoras da Computação em Nuvem — Virtualização

A virtualização é a base histórica/conceitual das demais tecnologias habilitadoras (conteinerização, serverless, grid computing etc.) e é a peça técnica que torna a nuvem possível.

**Definição:** tecnologia que permite que vários sistemas operacionais e aplicações rodem numa mesma máquina física, cada um "pensando" que tem o computador todo só para si.

Analogia: um prédio comercial dividido em salas independentes (máquinas virtuais), em vez de cada empresa precisar comprar um prédio inteiro (servidor físico) só pra usar uma fração dele.

Exemplo clássico: rodar Linux dentro de uma máquina virtual no Windows, sem precisar de outro computador físico (ex: VirtualBox).

#### Hypervisor (VMM — Virtual Machine Monitor)
Camada de software entre o hardware físico e os sistemas operacionais virtualizados; gerencia e aloca os recursos de hardware (processador, memória, rede, disco) entre as máquinas virtuais.

Analogia: é o "síndico do condomínio" — distribui os recursos entre os "moradores" (VMs) sem deixar um invadir o espaço do outro.

**Tipos de hypervisor:**

| Tipo | Também chamado | Onde roda | Uso típico | Desempenho |
|---|---|---|---|---|
| **Tipo 1** | Bare Metal / Stand Alone | Direto no hardware, sem SO por baixo | Servidores, datacenters | Maior |
| **Tipo 2** | Hosted / Hospedado | Como programa dentro de um SO já instalado | Desktop (ex: VirtualBox) | Menor |

- Tipo 1: mais opções de I/O e melhor desempenho, mas exige SO virtualizado adaptado para essa arquitetura.
- Tipo 2: maior compatibilidade de hardware; único que permite usar apps do SO hospedeiro (navegador, e-mail) ao mesmo tempo que a VM.

#### Virtualização Completa x Paravirtualização

| | Virtualização Completa | Paravirtualização |
|---|---|---|
| O que o hypervisor entrega | Emula o hardware real e completo | Interface simplificada/otimizada, não uma réplica exata |
| SO convidado precisa ser alterado? | Não — roda sem saber que está virtualizado | Sim — modificado para se comunicar direto com o hypervisor |
| Desempenho | Menor (mais overhead de emulação) | Melhor (menos "tradução" de instruções) |
| Compatibilidade | Alta (qualquer SO não modificado funciona) | Menor (só SOs adaptados) |

⚠️ **Nota de terminologia:** definição tecnicamente correta (documentada acima) — é a virtualização **completa** que simula o hardware real fielmente (SO não percebe que está virtualizado); a **paravirtualização** é o oposto: o hardware não é entregue de forma idêntica ao real, por isso o SO precisa ser modificado para "saber" que está virtualizado. Alguns materiais didáticos invertem essa explicação — vale confirmar com o professor.

📌 **Conexões com o restante do Tema 2:**
- Elasticidade dinâmica só é possível porque a virtualização permite criar/destruir VMs rapidamente.
- Agrupamento de recursos (multi-tenancy) é a virtualização em ação — vários "inquilinos" dividindo o mesmo hardware.
- IaaS entrega justamente máquinas virtuais prontas — é a virtualização empacotada como produto.

### Tecnologias Habilitadoras — Conteinerização

**Definição:** virtualização baseada em contêineres — método de implantar e executar aplicações distribuídas sem precisar de uma VM completa para cada uma. Vários sistemas isolados (containers) rodam em um único host, acessando um único kernel.

Analogia (do material): um navio cargueiro com vários contêineres — se um for danificado, não afeta os outros nem o navio, pois cada um é isolado.

Analogia complementar: VM = dividir um prédio em apartamentos completos, cada um com sua própria estrutura elétrica/hidráulica (SO próprio). Container = dividir um coworking — todos usam a mesma estrutura do prédio (kernel), mas cada mesa (container) é isolada.

#### VM x Container — comparação central

| | Máquina Virtual (VM) | Container |
|---|---|---|
| O que roda dentro | SO completo (kernel próprio) | Só a aplicação + dependências (sem SO próprio) |
| Camada de virtualização | Hypervisor (virtualiza o hardware) | Motor de containers (virtualiza o SO) |
| Compartilha com o host | O hardware físico | O kernel do SO do host |
| Peso | Pesado (GBs) | Leve (MBs) |
| Inicialização | Minutos (boot de SO completo) | Segundos |
| Isolamento | Total (cada VM é um "computador" separado) | Nível de processo (isolado, mas kernel compartilhado) |

⚠️ **Atenção:** "virtualização baseada em contêiner" ≠ "virtualização" (de VM). Na VM, cada instância tem seu próprio SO completo sobre o hypervisor. No container, não há SO instalado dentro — reaproveita o kernel do host e só carrega a aplicação.

#### Linha do tempo — conteinerização não é tecnologia nova

| Época | Marco | O que trouxe |
|---|---|---|
| Anos 70 | `chroot` (Unix V7) | Isolamento de diretório raiz de processo — origem do isolamento de processo |
| Anos 2000 | FreeBSD Jails, Linux-VServer, Solaris Containers, OpenVZ, Process Container (Google) | Divisão de um SO em sistemas menores independentes, com IP/hostname próprios |
| 2008 | LXC (Linux Container) | Primeira implementação completa/robusta de containers no Linux |
| 2011 | Warden | Evolução baseada no LXC |
| 2013 | **Docker** | Populariza e simplifica containers; plataforma open source escrita em Go |

📌 O Docker não inventou containers (já existiam desde os anos 70/2000) — facilitou drasticamente sua criação e administração, o que explica sua explosão de uso na era da nuvem.

#### Cloud Containers
Containers rodando na infraestrutura de um provedor de nuvem — virtualização em nível de SO, com vários sistemas isolados compartilhando um único host/kernel. Base técnica de tecnologias como **FaaS** (Function as a Service), que usa containers para iniciar/destruir ambientes de execução rapidamente.

### Tecnologias Habilitadoras — Serverless Computing (FaaS) e ASP

**Linha evolutiva completa:**

```
Servidor físico → VM (virtualização) → PaaS → Containers → Serverless (FaaS)
   (você cuida         (ainda cuida        (ainda cuida       (você só
    de tudo)            do SO da VM)        do container)      escreve a função)
```

Analogia (padaria): servidor físico = construir o forno do zero; VM = alugar forno industrial pronto (ainda liga/regula/limpa); PaaS = cozinha industrial equipada, só falta a receita; Container = receita em embalagem padronizada, roda em qualquer forno compatível; Serverless = você só entrega a receita — nem forno, nem cozinha, nem embalagem são problema seu, paga só quando alguém encomenda.

#### Serverless Computing / FaaS
"Sem servidor" não significa que não existe servidor — existe, mas é 100% gerenciado pelo provedor. O nome se refere a o **desenvolvedor nunca precisar pensar nele**.

| Característica | Significado |
|---|---|
| Orientado a eventos | Função só roda quando acionada (ex: upload de arquivo, requisição HTTP) |
| Baixo custo / pay-per-use | Cobrança só pelo tempo real de execução |
| Redução de código | Sem back-end em várias camadas; menos complexidade |
| Escalabilidade automática | Sem configuração extra para escalar |

📌 Serverless é a expressão mais radical das 5 características essenciais da nuvem (autoatendimento sob demanda, elasticidade, serviço mensurável) já vistas no início do Tema 2.

**Origem histórica:** plataforma **Zimki** (2006), focada em JS, cobrando só pelo código executado — não teve sucesso comercial, mas originou o conceito de FaaS/serverless moderno. Hoje os 3 grandes fornecedores: **AWS** (Lambda), **Azure** (Functions), **Google Cloud** (Cloud Functions).

#### ASP (Application Service Provider) — precursor do SaaS
Formato de terceirização que fornece software/aplicações via internet, geralmente por assinatura, sem o cliente arcar com hardware ou conhecimento técnico. Exemplos: Yahoo Mail, Gmail, Google Docs.

| Vantagem | Explicação |
|---|---|
| Baixo custo | Sem investimento em infraestrutura própria |
| Implantação rápida | Aplicativo já pronto e operacional |
| Acesso remoto autenticado | Login/senha para acessar dados no servidor do provedor |

**ASP x SaaS:**

| | ASP | SaaS |
|---|---|---|
| Surgimento | Anos 90/2000, antes do conceito formal de nuvem | Formalizado junto ao NIST/modelo de nuvem moderno |
| Arquitetura | Geralmente instância dedicada por cliente | Multi-tenant nativo (uma aplicação atende todos, dados isolados logicamente) |
| Relação com a nuvem | Antecessor conceitual | Um dos 3 modelos de serviço da nuvem, com as 5 características essenciais |

📌 ASP é o "protótipo" do SaaS — a ideia de alugar software pronto pela internet já existia antes da nuvem ser formalizada (NIST 2011).

#### Tabela-síntese: tecnologias habilitadoras

| Tecnologia | Nível de abstração | O que ainda se gerencia |
|---|---|---|
| Servidor físico | Nenhuma | Tudo |
| Virtualização (VM) | Baixa | SO da VM, aplicação |
| PaaS | Média | Aplicação e dados |
| Containers | Média-alta | Configuração do container |
| Serverless/FaaS | Altíssima | Só o código da função |
| ASP | Alta (pré-nuvem) | Nada — só consome o serviço pronto |

### Tecnologias Habilitadoras — Grid Computing e Utility Computing

#### Grid Computing (Computação em Grade)
Tecnologia que agrupa vários servidores/computadores para trabalharem como se fossem uma única máquina gigante, dividindo uma tarefa grande em pedaços menores, processados em paralelo.

Analogia: mudança de casa com geladeira grande — em vez de uma pessoa carregar sozinha, vários amigos carregam partes ao mesmo tempo.

Origem: anos 1990, no meio acadêmico/científico. Proposta original: fornecer capacidade computacional sob demanda, como uma concessionária de energia elétrica ou água fornece seus serviços.

Exemplo: duas empresas em fusos horários diferentes formam um grid — quando uma está no pico, a outra tem servidores ociosos, e trocam ciclos de CPU entre si.

**Características:**
| Característica | Significado |
|---|---|
| Uso de recursos ociosos | Aproveita CPU, disco, rede, equipamentos parados |
| Processamento paralelo | Tarefa grande dividida em partes menores, processadas simultaneamente |
| Organização virtual | Máquinas fisicamente separadas atuando como um único sistema |
| Confiabilidade | Falha em uma parte do grid não afeta as demais |

**Grid x Cluster:**

| | Cluster | Grid |
|---|---|---|
| Gerenciamento de recursos | Centralizado (um gerenciador único) | Descentralizado (cada nó tem seu próprio gerenciador) |
| Localização | Geralmente próxima fisicamente (mesmo datacenter) | Geograficamente distribuída |
| Visão do sistema | Trabalham sob controle unificado | Sem obrigação de aparência de sistema único |

#### Utility Computing (Computação de Utilidade Pública)
Modelo de computação sob demanda: o usuário contrata software, hardware e serviços conforme sua necessidade (picos, quedas, período de uso). Nome vem de *utilities* (concessionárias de água, luz, telefone) — trata TI como serviço público, cobrado pelo consumo.

**Características:**
| Característica | Significado |
|---|---|
| Escalabilidade | Recursos disponíveis a qualquer momento, sem perda de qualidade/tempo de resposta |
| Preço sob demanda | Paga conforme uso real de hardware/software/serviços |
| Serviços padronizados | Catálogo com diferentes SLAs (contratos de nível de serviço) por cliente |

**Grid x Utility Computing — não são a mesma coisa:**

| | Grid Computing | Utility Computing |
|---|---|---|
| Foco | Arquitetura — como distribuir processamento | Modelo de negócio — como cobrar pelo uso |
| Origem | Acadêmico/científico | Comercial (inspirado em concessionárias) |

📌 Utility computing é o antecessor direto do "serviço mensurável" (measured service), uma das 5 características essenciais da nuvem, e raiz do modelo pay-as-you-go (já visto em IaaS/PaaS/SaaS e CAPEX x OPEX).

#### Quadro-síntese: ancestrais da computação em nuvem

| Tecnologia/Modelo | Contribuição para a nuvem moderna |
|---|---|
| Grid Computing | Processamento distribuído/paralelo, compartilhamento de recursos geograficamente dispersos |
| Utility Computing | Modelo de cobrança por uso (pay-as-you-go), TI como serviço público |
| Virtualização | Base técnica para multi-tenancy e elasticidade |
| ASP | Modelo comercial de "alugar software pronto" (precursor do SaaS) |
| Containers | Portabilidade e leveza na entrega de aplicações |
| Serverless/FaaS | Abstração máxima — usuário só se preocupa com a aplicação |

---

<!-- Próximo tema será adicionado abaixo desta linha -->
