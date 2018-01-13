pipeline {
    agent any 
    stages {
        stage('Greeting') {
            steps {
                echo "Welcome. build: $BUILD_NUMBER"
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
    }
}