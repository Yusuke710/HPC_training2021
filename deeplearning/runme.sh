module load python/3.7.3-system

python3 -m venv .venv
source .venv/bin/activate

pip install --upgrade pip
pip install -r requirement.txt 

python3 alexnet_stl10.py
