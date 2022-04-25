module load python/3.6.2-static
module load pytorch

python3 -m venv .venv
source .venv/bin/activate

pip install --upgrade pip
#pip install -r requirement.txt not necessary on massive

python3 alexnet_stl10.py
