import subprocess

print("Python → C#")
subprocess.run(["dotnet", "run", "--project", "cs_app"])

# Read final result from JS-generated file
with open("final_result.txt", "r") as f:
    result = f.read().strip()

print("Final Result from JS:", result)
