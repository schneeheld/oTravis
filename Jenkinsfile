pipeline {
    agent any 
    stages {
        stage('Greeting') {
            steps {
                echo "Welcome."
                echo "build: $BUILD_NUMBER"
            }
        }
        stage('Build') {
            steps {
                sh 'make'
            }
        }        
        stage('Test') {
            steps {
                sh 'make test'
            }
        }
        stage('Report') {
            steps {
                echo "Final report."
            }
        }        
    }
}