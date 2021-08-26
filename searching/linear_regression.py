import numpy as np
import plotly.graph_objects as go
from sklearn.datasets import load_diabetes

class Model:
    def __init__(self):
        self.beta_0 = np.random.randn(1)
        self.beta_1 = np.random.randn(1)

    def __call__(self, x):
        return self.beta_1 * x + self.beta_0

model = Model()

# random value of beta_0
print(f"beta_0 : {model.beta_0}")

# random value of beta_1
print(f"beta_1 : {model.beta_1}")

# Try doing a regression by running model(3.0)
print(f"Prediction of the model : {model(3.0)}")


diabetes = load_diabetes()
# Data - Use only one feature (Feature 3)
diabete_data = diabetes.data
diabete_X = diabete_data[:, 2]
# Target Y
Y = diabetes.target

print(diabete_X)

# Visualize your data using plotly

fig = go.Figure()

fig.add_trace(
    go.Scatter(
        x=diabete_X,
        y=Y,
        mode="markers"
    )
)
fig.update_layout(title="Scatter plot of BMI against Diabetes metric")
fig.update_xaxes(title="BMI")
fig.update_yaxes(title="Diabetes metric")
fig.show()

# Define a cost function
def mse(Y_pred, Y_true):
    return np.mean((Y_pred - Y_true)**2)

# Calcul MSE
print(f"MSE : {mse(model(diabete_X), Y)}")
print(f"RMSE : {np.sqrt(mse(model(diabete_X), Y))}")

# Visualize your data using plotly

fig = go.Figure()

fig.add_trace(
    go.Scatter(
        x=diabete_X,
        y=Y,
        mode="markers",
        name="Target"
    )
)

fig.add_trace(
    go.Scatter(
        x=diabete_X,
        y=model(diabete_X),
        mode="lines",
        name="Predictions"
    )
)
fig.update_layout(title="Scatter plot of BMI against Diabetes metric")
fig.update_xaxes(title="BMI")
fig.update_yaxes(title="Diabetes metric")
fig.show()
