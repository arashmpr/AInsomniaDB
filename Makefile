# Go parameters
GOCMD = go
GOBUILD = $(GOCMD) build
GOCLEAN = $(GOCMD) clean
GORUN = $(GOCMD) run

# Versions
VERSION := 1.0.0

# Build target
build:
	$(GOBUILD) -o ainsomnia ainsomnia.go

# Run target
run:
	$(GORUN) ainsomnia.go

# Clean target
clean:
	$(GOCLEAN)
	rm -f ainsomnia
