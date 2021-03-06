ui = fluidPage(theme = add_theme(getShinyOption('theme')), 
               add_css(),

sidebarLayout(
  sidebarPanel(width = 3, 
  hr(),
  sliderInput("range.l", 
              label = "Range",
              min = -20, 
              max = 20, 
              value = c(-4,4)),
  hr(),
  sliderInput("mu.l", 
              label = HTML("Mean (&mu;)"),
              min = -3, 
              max = 3, 
              step = 0.5, 
              value = 0, 
              animate = T),
  hr(),
  sliderInput("sig.l", 
              label = HTML("Std Dev (&sigma;)"),
              min = 0.5, 
              max = 5, 
              step = 0.5, 
              value = 1, 
              animate = T)),

mainPanel(width = 9,
 tabsetPanel(type = 'pills',
  tabPanel('Distribution Function',
           metricsgraphicsOutput(height = "550px", "logC")),
  tabPanel('Density',
           metricsgraphicsOutput(height = "550px", "logP")),
  tabPanel('Survival',
           metricsgraphicsOutput(height = "550px", "logR")),
  tabPanel('Hazard',
           metricsgraphicsOutput(height = "550px", "logh")),
  tabPanel('Cumulative Hazard',
           metricsgraphicsOutput(height = "550px", "logH")),
  tabPanel('Quantile',
           metricsgraphicsOutput(height = "550px", "logQ"))))))
