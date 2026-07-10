# Tema 3 — Arquitetura de Computação em Nuvem

> Curso: Cloud Computing — Ciência da Computação (Estácio)
> Uso: fonte de revisão em áudio (NotebookLM)

---

## Propósito

Compreender os elementos principais da arquitetura de computação em nuvem, permitindo analisar e comparar diferentes arquiteturas, além de conhecer os componentes de um sistema em nuvem e seu funcionamento.

## Objetivos

- Identificar as características básicas da arquitetura de infraestrutura em nuvem.
- Reconhecer o modelo de camadas da tecnologia de computação em nuvem.
- Descrever os serviços das soluções da arquitetura em nuvem.

---

## 1. Introdução

A computação em nuvem é um modelo de serviço que fornece recursos de computação, armazenamento e aplicativos on-line, sob demanda, sem exigir investimento em infraestrutura própria. É oferecida por provedores como AWS, Microsoft Azure e Google Cloud Platform.

A **arquitetura em nuvem** é a coleção organizada de todos os componentes (físicos e lógicos) necessários para formar o cloud computing.

📌 **Conexão com o Tema 2:** lá vimos *o que é* nuvem (definição NIST, características, modelos de serviço IaaS/PaaS/SaaS e modelos de implantação). Aqui vemos *como ela é organizada por dentro*.

---

## 2. Arquitetura x Implementação (Engenharia)

Todo produto/serviço complexo passa por duas etapas distintas:

| Etapa | Função | Analogia (construção de um prédio) |
|---|---|---|
| **Arquitetura** | Descreve características, funções e como os elementos se organizam. Define **o que fazer**. | O arquiteto desenha a planta do prédio |
| **Implementação / Engenharia** | Usa a especificação da arquitetura para construir/desenvolver o produto de fato. | O engenheiro civil executa a obra |

Aplicando à nuvem: a arquitetura mostra os aspectos da funcionalidade e como os elementos funcionais se organizam; a implementação constrói data centers, configura servidores, programa sistemas.

**Exemplo clássico:** em uma arquitetura de rede de computadores, as funções são organizadas em camadas, que definem formatos de mensagem, controle de erro etc. O implementador usa essas especificações para construir o produto.

---

## 3. As Três Camadas da Infraestrutura em Nuvem

| Camada | Conteúdo | Analogia (prédio de apartamentos) |
|---|---|---|
| **Servidor** | Servidores virtuais, físicos ou híbridos | Estrutura do prédio (vigas, colunas) |
| **Armazenamento** | Sistemas de arquivos, bancos de dados, outros tipos de armazenamento | Armários e depósitos |
| **Rede** | Conectividade, segurança, gerenciamento de aplicativos | Corredores, elevadores, portaria |

📌 **Conexão com o Tema 2:** a virtualização (hypervisor Tipo 1/2) vive dentro da **camada de servidor**.

### Ferramentas complementares
- Automação de nuvem
- Monitoramento
- Gerenciamento de configuração

*(Analogia: equipe de zeladoria/segurança do prédio — não fazem parte da "obra", mas mantêm tudo funcionando.)*

---

## 4. Características exigidas da Arquitetura em Nuvem

| Característica | Significado |
|---|---|
| Segurança | Proteção de dados e acessos |
| Confiabilidade | Sistema funciona de forma consistente |
| Integridade | Dados não são corrompidos/alterados indevidamente |
| Disponibilidade | Serviço acessível quando necessário |

💡 **Prática:** rodar `ping 8.8.8.8` continuamente no terminal dá uma noção prática do conceito de disponibilidade sendo verificada em tempo real.

---

## 5. Recap rápido — On-Premise x Nuvem

Retomada do Tema 2: a nuvem permite às empresas explorar **economia de escala**, otimizando gastos de TI e ganhando produtividade via automação — isso é o que sustenta o modelo **OPEX** (pagar pelo uso, sem grande investimento inicial).

---

## 6. Componentes da Infraestrutura em Nuvem

### 6.1 Os 6 componentes técnicos

| Componente | Função |
|---|---|
| **Hardware do servidor** | Base física de execução; recursos compartilhados para escalabilidade e alta disponibilidade |
| **Virtualização** | Permite acesso a serviços/dados de qualquer lugar via internet, abstraindo os recursos físicos |
| **Modelos de serviço** | Arquiteturas escaláveis para SaaS, PaaS, IaaS |
| **Gerenciamento de nuvem** | Gerencia recursos, aloca capacidade, otimiza serviços |
| **Redes em nuvem** | Conectividade; suporta apps e serviços em tempo real |
| **Segurança em nuvem** | Criptografia e controles de acesso para proteção de dados |

📌 Virtualização e Modelos de Serviço (SaaS/PaaS/IaaS) já foram vistos em profundidade no Tema 2.

### 6.2 Front End x Back End

A arquitetura em nuvem se divide em dois grandes grupos, conectados pela **internet**:

| Grupo | Definição | Exemplos |
|---|---|---|
| **Front End** | Interface que o usuário utiliza para acessar a nuvem (pode ser física ou lógica) | Smartphone, notebook, navegador web |
| **Back End** | A própria nuvem — hardware, software e gestão que fornecem os serviços; geralmente distante fisicamente do usuário | Servidores, armazenamento, apps de gerenciamento |

**Front End:** hoje o usuário costuma interagir apenas com a interface mais simples possível (ex: navegador). O nível de interação cresce conforme o serviço exige mais do usuário (ex: IaaS exige mais do que SaaS).

**Back End — 7 componentes típicos:**
1. Aplicação
2. Serviços
3. Cloud runtime (ambiente de execução)
4. Armazenamento
5. Infraestrutura
6. Gerenciamento
7. Segurança

📌 Esses 7 componentes detalham as 3 camadas (Servidor, Armazenamento, Rede) vistas na seção 3 deste mesmo tema.

**Fluxo geral:**
```
[Front End] --- Internet --- [Back End]
 (usuário)                    (a nuvem)
```
A conexão via internet entre front end e back end é o que viabiliza o acesso a serviços de qualquer lugar do mundo.

---

## 7. Infraestrutura dos Datacenters

### 7.1 Organização Física

**Datacenter:** construção projetada para abrigar com segurança servidores e dispositivos de armazenamento, interconectados por redes de alto desempenho. Mantido por organizações especializadas em processar dados de múltiplos usuários — um dos pilares da computação em nuvem.

**Componentes de rede do back end:** switches, roteadores, modems e software de rede apropriado — conectam servidores, armazenamento e sistemas de gerenciamento/segurança.

📌 São os mesmos tipos de equipamento de qualquer rede; a diferença está no **volume de tráfego** que precisam suportar em escala de nuvem.

**Detalhe:** um provedor de nuvem pode, via **SaaS**, oferecer também o serviço de implementação/manutenção da rede do próprio usuário — reduzindo custo e esforço do cliente (reforça o conceito de shared responsibility).

### 7.2 Organização Lógica

Software que viabiliza gerência, funcionamento, controle e segurança da nuvem.

**Serviços de Gerenciamento:** alocam recursos conforme a necessidade do usuário final.
> Exemplo: várias VMs rodando simultaneamente no mesmo servidor físico, compartilhando recursos — o software de gerenciamento evita gargalos e aloca corretamente cada tarefa. (Conecta com virtualização/hypervisor do Tema 2.)

**Serviços de Segurança:** garantem
- Acesso apenas a usuários autorizados
- Continuidade de tarefas críticas
- Proteção contra tentativas de invasão
- Operação contínua mesmo sob ataque ou falha de hardware

---

## 8. Administração da Camada de Servidores

### 8.1 Conceito

A camada de servidores é formada por servidores físicos ou virtuais que hospedam serviços, aplicativos e dados, e também armazenam/gerenciam dados (arquivos, backups, imagens). Sustenta sites, servidores de e-mail e sistemas de banco de dados.

📌 É o detalhamento da camada **Servidor** vista na seção 3 deste Tema 3.

### 8.2 O que envolve administrar essa camada

- Monitorar desempenho
- Gerenciar configurações
- Aplicar patches de segurança
- Realizar backups regulares
- Gerenciar usuários e controle de acesso
- Documentar configurações

⚠️ Fazer isso manualmente é inviável em ambientes grandes → necessidade de ferramentas de automação.

### 8.3 Categorias de Ferramentas de Administração

| Categoria | Função |
|---|---|
| Servidores de gerenciamento | Configurar e monitorar servidores/dispositivos de rede |
| Gerenciadores de configuração | Gerenciar configurações e aplicativos |
| Monitoramento de servidor | Acompanhar desempenho |
| Automação de tarefas | Automatizar tarefas repetitivas (ex: backup) |
| Ferramentas de segurança | Proteger o ambiente de servidor |

### 8.4 Plataformas dos Principais Provedores

| Provedor | Criação/gestão de servidores virtuais | Monitoramento |
|---|---|---|
| AWS | Amazon EC2 | Amazon CloudWatch |
| Microsoft Azure | Azure Virtual Machines | Azure Monitor |
| Google Cloud (GCP) | Compute Engine | Cloud Monitoring |
| IBM Cloud | IBM Virtual Servers | IBM Cloud Monitoring |

📌 Padrão comum a todos os provedores: separação entre ferramenta de **criação/gestão** e ferramenta de **monitoramento** — reflete a separação entre as categorias de ferramentas da seção 8.3.

---

## 9. Serviços em Nuvem

### 9.1 Base conceitual

Serviços em nuvem = modelo de TIC em que recursos de software e hardware são entregues **como serviço** via internet, sem o usuário se preocupar com configuração/manutenção da infraestrutura. Sustentados por hardware de processamento e armazenamento organizado em datacenters.

### 9.2 Os 6 Tipos de Serviços em Nuvem

| Tipo | O que permite |
|---|---|
| Armazenamento | Guardar/acessar arquivos independente da localização física |
| Computação | Processamento em escalas variadas (servidores virtuais a clusters) |
| Infraestrutura | Acesso a servidores e serviços de rede (VPNs, firewalls) |
| Plataforma | Criar, implantar e gerenciar aplicativos na nuvem |
| Análise | Processar/analisar grandes volumes de dados |
| Desenvolvimento | Criar aplicativos na nuvem via API |

📌 Classificação mais granular que IaaS/PaaS/SaaS (Tema 2): "Infraestrutura" ≈ IaaS, "Plataforma" ≈ PaaS; os demais são fatias específicas geralmente entregues dentro de um desses três modelos.

⚠️ Atenção em provas: "3 modelos de serviço" = IaaS/PaaS/SaaS; "tipos de serviços em nuvem" (lista ampla) = a tabela acima.

### 9.3 Complementos (resumo de vídeo da aula)

- **Backup e recuperação de desastres (DR):** nuvem torna o ambiente mais robusto/confiável em caso de falha de servidor (conecta com Confiabilidade/Disponibilidade, seção 4).
- **Análise e Data Lakes:** reforça o serviço de Análise.
- **GPU na nuvem:** acesso a processamento gráfico/paralelo sem hardware próprio (relevante para IA/ML).
- **Flexibilidade de trabalho:** permite atuar de qualquer lugar com internet, inclusive equipes remotas.

---

## 10. Back End em Detalhe: Aplicação, Serviço, Cloud Runtime

| Componente | Função | Analogia |
|---|---|---|
| **Aplicação** | Recebe requisições do usuário; interface de acesso à nuvem | Garçom que anota o pedido |
| **Serviço** | Onde a tarefa de fato acontece — o "coração" da nuvem | A cozinha executando o prato |
| **Cloud runtime** | Onde o serviço é executado; permite várias execuções em paralelo no mesmo servidor | Equivale ao **sistema operacional** de um PC comum |

📌 O cloud runtime é criado com ajuda do **hypervisor** (Tema 2) — ele implementa a virtualização, permitindo múltiplos usuários/SOs (ex: Windows e Linux) compartilharem o mesmo hardware físico, cada um isoladamente.

## 11. Serviço de Armazenamento

Mantém a consistência das informações — onde todos os dados ficam guardados.

**Tecnologias de disco:**

| Tecnologia | Característica |
|---|---|
| HD | Alta capacidade (8–16TB), mais barato, mais lento |
| SSD | Muito mais rápido; caro em grandes capacidades |
| Optane (Intel) | Mais recente; capacidade ainda limitada pelo custo |

**NAS (Network Attached Storage):** equipamento robusto e completo (processador + memória própria) dedicado a armazenar grandes volumes com segurança; usado em redes locais e como infraestrutura de nuvem.

## 12. Serviço de Compartilhamento

Protocolos de compartilhamento de arquivos/diretórios em rede:

| Protocolo | Origem |
|---|---|
| CIFS (Common Internet File System) | Mundo Windows |
| NFS (Network File System) | Mundo Linux/Unix |

## 13. Infraestrutura (Hardware de Processamento)

- **Processadores:** Xeon (Intel) e Opteron (AMD) — alta capacidade + RAM de baixa latência
- **GPUs:** aceleram cargas de processamento paralelo em servidores de alto desempenho
- **TPU (Google):** ASIC (circuito de aplicação específica) feito pelo Google, focado em tarefas de IA, disponível via GCP

## 14. Recap (vídeo): 4 Soluções de Serviço em Nuvem

**IaaS · PaaS · SaaS · FaaS** — hospedados por fornecedores e entregues via internet.

📌 Mesmos modelos do Tema 2 (FaaS já visto como modelo estendido, junto com DRaaS/CaaS/DBaaS). Usuário final só precisa de computador + rede + SO para acessar toda essa complexidade escondida no back end.

---

## 15. Solução IaaS: Componentes e Cenários

### 15.1 Componentes de uma solução IaaS

**Hardware:** servidores virtuais, instâncias de servidor, sistemas de armazenamento de dados, sistemas de gerenciamento de dados, ferramentas de balanceamento de carga.

**Software:** plataformas de orquestração de nuvem (gerenciam múltiplos provedores em um único ambiente).

📌 Segurança é responsabilidade compartilhada entre provedor e cliente (reforça a matriz de responsabilidade do Tema 2).

### 15.2 Os 5 Cenários do IaaS

| Cenário | Definição |
|---|---|
| **Elasticidade** | Solicitar/devolver recursos rapidamente conforme a demanda; escala vertical ou horizontal; paga-se só pelo uso |
| **Balanceamento de carga** | Distribui tráfego entre servidores/links/BD/armazenamento; ex: Elastic Load Balancer (AWS) + S3 |
| **Alta disponibilidade** | Foco em manter serviço no ar: replicação de dados, balanceamento de carga, redundância, monitoramento contínuo, atualizações frequentes |
| **Multicloud** | Uso de vários provedores de nuvem em um único ambiente, gerenciado via orquestração (Kubernetes, OpenStack) |
| **Cloud híbrido** | Combinação de infraestrutura local (servidores físicos) + nuvem pública (ex: S3, Elastic Load Balancer); suporta sistemas como MongoDB |

⚠️ Diferença de contexto: no Tema 2, "híbrido" é um **modelo de implantação** (definição). Aqui, "cenário de cloud híbrido" é a **aplicação prática** desse conceito dentro do IaaS.

---

## 16. Edge Computing

### 16.1 Conceito

Processar e armazenar dados **localmente**, próximo à origem, em vez de enviar a um servidor remoto. Resultado: menor latência, mais confiabilidade, melhor desempenho/segurança/escalabilidade, economia de largura de banda.

📌 Resolve o problema de latência gerado pela distância geográfica dos datacenters (seção 7.1).

### 16.2 IoT x Edge Computing

| Cenário | Onde processa |
|---|---|
| IoT | Dispositivos coletam dados → enviados à nuvem/centro de processamento |
| Edge Computing | Processa localmente nos extremos da rede → só envia à nuvem o necessário |

### 16.3 Quando usar

Aplicações que exigem: resposta em tempo real, decisões quase instantâneas (reconhecimento facial, localização, prevenção de obstáculos), redução de tráfego, IoT com ação local.

⚠️ Fatores a considerar: largura de banda, energia, infraestrutura, capacidade de processamento, tipo de serviço, custo de implantação, rede existente, disponibilidade de profissionais.

### 16.4 Edge Computing + Serverless

**Serverless:** separa infraestrutura de back end das aplicações; usuário roda cargas de trabalho em ambientes gerenciados (escalonamento automático, alta disponibilidade, monitoramento, pay as you go).

📌 Serverless = mesmo conceito do **FaaS** visto no Tema 2 (modelo estendido).

Combinar edge + serverless é essencial porque gerenciar manualmente uma infraestrutura tão distribuída seria quase impossível — o desenvolvedor só escreve código, a infraestrutura (inclusive nas bordas) é gerenciada automaticamente.

### 16.5 Edge x Cloud Computing

| Aspecto | Cloud | Edge |
|---|---|---|
| Processamento | Centralizado (datacenters distantes) | Descentralizado (bordas da rede) |
| Decisões | Mais lentas | Mais rápidas |
| Estrutura | Grandes datacenters | Gateways, data centers menores, dispositivos + ML embarcado |

Edge computing é descrito como "a próxima evolução da computação em nuvem" — complementar, não substituto.

---

## 17. Migração para a Nuvem: os 7Rs

⚠️ **Correção de terminologia:** o material confunde "Repurchase" de marketing (fidelização de clientes) com "Repurchase" de migração para nuvem. Na migração, Repurchase = **"drop and shop"** — substituir aplicação on-premise por um **SaaS** equivalente. A definição de marketing não se aplica aqui.

### 17.1 Quando migrar para a nuvem

Infraestrutura ultrapassada · necessidade de escalar rápido · acesso de qualquer lugar · economia (CAPEX → OPEX) · maior segurança.

⚠️ Segundo relatório Unisys Cloud Success: 1 em cada 3 empresas não percebe os benefícios esperados — migração exige planejamento.

### 17.2 Os 7Rs

| Estratégia | Também conhecida como | O que faz |
|---|---|---|
| **Rehost** | Lift and shift | Move app/infra/dados para nuvem sem alterar configurações; migra para IaaS via camada de hypervisor |
| **Replatform** | — | Pequenos ajustes de configuração (ex: forma de acessar BD) sem mudar arquitetura principal; usa VMs para emular compatibilidade (sistemas legados) |
| **Repurchase** | Drop and shop | Substitui app on-premise por SaaS equivalente |
| **Refactor / Re-architect** | — | Reconstrói do zero, nativo da nuvem: microsserviços, serverless, contêineres, balanceadores de carga |
| **Retire** | — | Desativa workloads não mais necessários |
| **Retain** | Revisit | Mantém localmente por exigência de latência, conformidade ou restrição regulatória |
| **Relocate** | — | Move o mesmo conjunto de componentes mantendo ferramentas/processos existentes; app "não percebe" mudança; pode ser feito só pela equipe de operações |

**Rehost x Relocate:** Rehost migra de ambiente físico para nuvem IaaS pela primeira vez; Relocate já está em VMs e apenas realoca mantendo ferramentas/processos existentes, sem precisar de devs.

📌 Refactor conecta com Serverless/FaaS (seção 16.4) e Balanceamento de carga (seção 15.2). Retain conecta com o motivo de usar Edge Computing (latência) e com shared responsibility (conformidade).

Roteiro geral: planejamento → escolha da nuvem → estratégia de migração (7Rs) → gerenciamento de desempenho de aplicações (APM) para garantir sucesso (conecta com monitoramento contínuo, seção 15.2).

---

<!-- Próximo bloco do Tema 3 será adicionado abaixo desta linha -->
