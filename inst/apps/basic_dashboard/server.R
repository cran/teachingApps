server <- function(input, output) {
  
  output$progressBox <- renderInfoBox({
    
    infoBox("Progress", 
            paste0(25 + input$count, "%"), 
            icon = icon("list"),
            color = "purple")
})
  output$approvalBox <- renderInfoBox({
    
    infoBox("Approval", 
            "80%", 
            icon = icon("thumbs-up", lib = "glyphicon"),
            color = "yellow")
})
  output$progressBox2 <- renderInfoBox({
    
    infoBox("Progress", 
            paste0(25 + input$count, "%"), 
            icon = icon("list"),
            color = "purple", 
            fill = TRUE)
})
  output$approvalBox2 <- renderInfoBox({
    
    infoBox("Approval", 
            "80%", 
            icon = icon("thumbs-up", lib = "glyphicon"),
            color = "yellow", 
            fill = TRUE)
})
}