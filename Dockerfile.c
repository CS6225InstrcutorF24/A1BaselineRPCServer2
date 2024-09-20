FROM python:3.11-slim AS base
WORKDIR /app

COPY requirements.txt .

RUN pip install --no-cache-dir -r requirements.txt

COPY . .

CMD ["python", "client.py"]

# # Test stage
# FROM base AS test
# CMD ["python", "-m", "unittest", "discover"]
# 